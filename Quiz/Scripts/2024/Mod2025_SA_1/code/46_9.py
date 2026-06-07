try:
    a,b,c=6,7,9
    def h(b):
        a*=1
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,1,4
    print(h(a),a,b,c)
except: print('error')
