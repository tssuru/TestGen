try:
    
    try:
        print(1, end="")
        print(0!=0, end="")
        print(9, end="")
    except BaseException: 
        print(8, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
