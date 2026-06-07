try:
    
    try:
        print(4, end="")
        print(int(9//3), end="")
        print(3, end="")
    except Exception: 
        print(0, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
