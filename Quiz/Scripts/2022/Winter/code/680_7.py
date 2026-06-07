try:
    
    try:
        print(6, end="")
        print(int("9"), end="")
        print(5, end="")
    except Exception: 
        print(1, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
