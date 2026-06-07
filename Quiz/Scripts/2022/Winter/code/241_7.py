try:
    
    try:
        print(0, end="")
        print(int(1/1), end="")
        print(2, end="")
    except ValueError: 
        print(3, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
