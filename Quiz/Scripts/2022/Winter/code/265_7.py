try:
    
    try:
        print(0, end="")
        print(int("a3"), end="")
        print(0, end="")
    except ValueError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
