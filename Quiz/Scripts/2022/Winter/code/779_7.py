try:
    
    try:
        print(6, end="")
        print(int("9"), end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(7, end="")
    
except: print('error')
