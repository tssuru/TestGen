try:
    
    try:
        print(3, end="")
        print(int("2"), end="")
        print(0, end="")
    except Exception: 
        print(8, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
