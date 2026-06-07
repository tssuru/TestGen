try:
    
    try:
        print(8, end="")
        print(int("3"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
