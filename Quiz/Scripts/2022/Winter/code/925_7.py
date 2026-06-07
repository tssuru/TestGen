try:
    
    try:
        print(1, end="")
        print(0>6, end="")
        print(9, end="")
    except BaseException: 
        print(1, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
