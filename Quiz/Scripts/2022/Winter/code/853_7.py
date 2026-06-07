try:
    
    try:
        print(5, end="")
        print(int("1"), end="")
        print(9, end="")
    except Exception: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
