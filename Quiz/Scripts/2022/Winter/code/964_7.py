try:
    
    try:
        print(7, end="")
        print(int("d9"), end="")
        print(8, end="")
    except ValueError: 
        print(6, end="")
    except Exception: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
