try:
    
    try:
        print(2, end="")
        print(int("4"), end="")
        print(5, end="")
    except Exception: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
