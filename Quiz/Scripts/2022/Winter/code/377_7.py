try:
    
    try:
        print(5, end="")
        print(int("3"), end="")
        print(7, end="")
    except Exception: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
