try:
    
    try:
        print(9, end="")
        print(4<=7, end="")
        print(6, end="")
    except BaseException: 
        print(0, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
