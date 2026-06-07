try:
    
    try:
        print(6, end="")
        print(int("8"), end="")
        print(0, end="")
    except Exception: 
        print(5, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
