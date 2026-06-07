try:
    
    try:
        print(7, end="")
        print(int("3"), end="")
        print(1, end="")
    except ValueError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
