try:
    
    try:
        print(5, end="")
        print(1!=5, end="")
        print(8, end="")
    except BaseException: 
        print(9, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
