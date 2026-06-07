try:
    a,b,c=8,3,4
    def h(b):
        a*=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,1,5
    print(h(a),a,b,c)
except: print('error')
