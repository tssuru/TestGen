try:
    
    try:
        print(3, end="")
        print(int(6//0), end="")
        print(7, end="")
    except BaseException: 
        print(0, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
