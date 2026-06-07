try:
    
    try:
        print(9, end="")
        print(int("a3"), end="")
        print(7, end="")
    except ValueError: 
        print(8, end="")
    except Exception: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
