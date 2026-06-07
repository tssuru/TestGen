try:
    
    try:
        print(5, end="")
        print(int(4%3), end="")
        print(8, end="")
    except ValueError: 
        print(2, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
