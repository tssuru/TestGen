try:
    
    try:
        print(2, end="")
        print(5>=7, end="")
        print(8, end="")
    except TypeError: 
        print(3, end="")
    except Exception: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
