try:
    
    try:
        print(5, end="")
        print(7>=9, end="")
        print(8, end="")
    except Exception: 
        print(1, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(3, end="")
    
except: print('error')
