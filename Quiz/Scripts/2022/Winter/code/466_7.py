try:
    
    try:
        print(3, end="")
        print(int("d9"), end="")
        print(2, end="")
    except ValueError: 
        print(1, end="")
    except Exception: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
