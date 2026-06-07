try:
    
    try:
        print(3, end="")
        print(int("a7"), end="")
        print(5, end="")
    except ValueError: 
        print(3, end="")
    except Exception: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
