try:
    
    try:
        print(4, end="")
        print(int("1"), end="")
        print(8, end="")
    except ValueError: 
        print(6, end="")
    except Exception: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(0, end="")
    
except: print('error')
