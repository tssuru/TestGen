try:
    
    try:
        print(5, end="")
        print(0>3, end="")
        print(2, end="")
    except Exception: 
        print(6, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
