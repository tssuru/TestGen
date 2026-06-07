try:
    
    try:
        print(8, end="")
        print(int(4//1), end="")
        print(0, end="")
    except BaseException: 
        print(7, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
