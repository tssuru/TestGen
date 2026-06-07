try:
    
    try:
        print(6, end="")
        print(int(9//0.0), end="")
        print(4, end="")
    except TypeError: 
        print(7, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
