try:
    
    try:
        print(7, end="")
        print(2>=3, end="")
        print(9, end="")
    except BaseException: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
