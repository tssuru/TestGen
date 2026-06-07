try:
    
    try:
        print(8, end="")
        print(9<8, end="")
        print(1, end="")
    except TypeError: 
        print(6, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
