try:
    
    try:
        print(0, end="")
        print(int("7"), end="")
        print(8, end="")
    except Exception: 
        print(1, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
