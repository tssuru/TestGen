try:
    
    try:
        print(9, end="")
        print(int("0"), end="")
        print(7, end="")
    except ValueError: 
        print(4, end="")
    except Exception: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
