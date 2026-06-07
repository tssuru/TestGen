try:
    
    try:
        print(8, end="")
        print(int("c9"), end="")
        print(2, end="")
    except ValueError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
