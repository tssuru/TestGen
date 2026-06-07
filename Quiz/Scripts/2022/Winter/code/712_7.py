try:
    
    try:
        print(6, end="")
        print(int(9//3), end="")
        print(3, end="")
    except ValueError: 
        print(3, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
