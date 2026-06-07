try:
    
    try:
        print(2, end="")
        print(int("9"), end="")
        print(4, end="")
    except ValueError: 
        print(2, end="")
    except Exception: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
