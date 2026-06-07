try:
    
    try:
        print(1, end="")
        print(int("c9"), end="")
        print(2, end="")
    except Exception: 
        print(0, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
