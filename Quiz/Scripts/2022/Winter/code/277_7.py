try:
    
    try:
        print(4, end="")
        print(7<6, end="")
        print(5, end="")
    except ValueError: 
        print(3, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
