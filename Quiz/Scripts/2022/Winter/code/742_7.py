try:
    
    try:
        print(8, end="")
        print(int("9"), end="")
        print(2, end="")
    except Exception: 
        print(7, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
