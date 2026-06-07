try:
    
    try:
        print(2, end="")
        print(int("2"), end="")
        print(4, end="")
    except ValueError: 
        print(0, end="")
    except Exception: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
