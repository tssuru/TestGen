try:
    
    try:
        print(5, end="")
        print(3<=5, end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
