try:
    
    try:
        print(4, end="")
        print(int(0/1), end="")
        print(5, end="")
    except ValueError: 
        print(2, end="")
    except Exception: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(0, end="")
    
except: print('error')
