try:
    
    try:
        print(3, end="")
        print(int("3"), end="")
        print(2, end="")
    except ValueError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
