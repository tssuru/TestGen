try:
    
    try:
        print(9, end="")
        print(int(8%0.0), end="")
        print(3, end="")
    except BaseException: 
        print(0, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
