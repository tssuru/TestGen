try:
    
    try:
        print(3, end="")
        print(int(8//0), end="")
        print(2, end="")
    except Exception: 
        print(8, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(4, end="")
    
except: print('error')
