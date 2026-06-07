try:
    
    try:
        print(3, end="")
        print(int("8"), end="")
        print(0, end="")
    except Exception: 
        print(7, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
