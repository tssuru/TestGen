try:
    
    try:
        print(4, end="")
        print(int(1//1), end="")
        print(3, end="")
    except ValueError: 
        print(7, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
