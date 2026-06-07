try:
    
    try:
        print(1, end="")
        print(int(9//0.0), end="")
        print(2, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
