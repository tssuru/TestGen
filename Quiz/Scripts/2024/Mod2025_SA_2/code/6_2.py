try:
    a,b,c=1,0,2
    def h(a):
        a*=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=7,5,4
    print(h(a),a,b,c)
except: print('error')
