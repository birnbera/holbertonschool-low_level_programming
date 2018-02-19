#!/usr/bin/python3
"""
Script to export data on all employee tasks from
'https://jsonplaceholder.typicode.com/'
"""
from requests import get


def get_endpoint(endpoint):
    """Get data from specific endpoint as JSON"""
    r = get('https://jsonplaceholder.typicode.com/{}'.format(endpoint))
    r.raise_for_status()
    return r.json()


def combine_users_tasks(users, tasks):
    """Dictionary and list comprehension to combine data from users and
    todo list"""
    return {
        user.get("id"): [
            {
                "username": user.get("username"),
                "task": task.get("title"),
                "completed": task.get("completed")
            }
            for task in tasks if task.get("userId") == user.get("id")
        ]
        for user in users
    }

if __name__ == "__main__":
    tasks = get_endpoint("todos")
    users = get_endpoint("users")
    try:
        out = combine_users_tasks(users, tasks)
        print(out)
    except Exception as e:
        print(e)
