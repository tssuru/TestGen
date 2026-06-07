try:
    
    try:
        print(9, end="")
        print(1!=9, end="")
        print(6, end="")
    except BaseException: 
        print(9, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
