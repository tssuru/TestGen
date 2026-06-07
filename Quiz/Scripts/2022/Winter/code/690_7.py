try:
    
    try:
        print(3, end="")
        print(5>0, end="")
        print(0, end="")
    except BaseException: 
        print(4, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
