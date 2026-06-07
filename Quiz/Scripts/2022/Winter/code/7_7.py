try:
    
    try:
        print(2, end="")
        print(int("a8"), end="")
        print(1, end="")
    except ValueError: 
        print(5, end="")
    except Exception: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
